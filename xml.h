#define MEMORY_XML "<?xml version=\"1.0\" encoding=\"us-ascii\" ?>\n\
<Platform name=\"Win32\" version=\"5\">\n\
\n\
	<!--*************************************************************************\n\
	Static Global Heap Settings\n\
\n\
	THIS FILE IN INCLUDED VEBATIM IN THE EXECUTABLE\n\
\n\
	These are the settings for the Global heaps created at startup; they\n\
	 indicate to the memory manager how RAM should be initially organized.\n\
\n\
	Only the static Global heaps that get used by the platform can be specified\n\
	 here.  All other entries will be ignored.  To create additional sub-heaps\n\
	 at run-time, see SubHeaps.xml.\n\
	*************************************************************************-->\n\
\n\
  <Shared>\n\
    <Options autoSmall=\"256\" />\n\
\n\
    <Shared>\n\
      <Options\n\
				numBlocks=\"0xA0000\"\n\
			/>\n\
\n\
      <!-- Use the logical heap definition if paging is enabled (default). -->\n\
      <CreateStatic name=\"System Logical\" size=\".75G\"/>\n\
\n\
      <!-- Use this heap definition if paging is disabled. -->\n\
      <CreateStatic name=\"System\" size=\".5G\"/>\n\
\n\
    </Shared>\n\
\n\
    <Shared size=\"200M\">\n\
      <Options\n\
				numBlocks=\"0x20000\"\n\
			/>\n\
\n\
      <CreateStatic name=\"Debug Logical\" />\n\
      <CreateStatic name=\"Debug\" />\n\
\n\
    </Shared>\n\
\n\
  </Shared>\n\
\n\
\n\
  <Shared parent=\"System\">\n\
\n\
    <!--======================= Thread-Local Storage Heap ======================\n\
\n\
		Because thread shelves are created via the DLL_THREAD_ATTACH message,\n\
		 thread-local objects can't be created via 'new' (because 'new'\n\
		 indirectly makes a system call when entering a critical section.)\n\
\n\
		This heap is used exclusively by the ThreadStorage namespace for\n\
		 allocating TLS objects.-->\n\
\n\
    <CreateLocal name=\"Thread Storage\" size=\"48k\">\n\
      <Options\n\
				numBlocks=\"272\"\n\
				descGrowBy=\"32\"\n\
				alignment=\"4\" />\n\
    </CreateLocal>\n\
\n\
\n\
    <!--============================== String Heap =============================\n\
\n\
		The String heap needs to be created before SubHeaps.xml is parsed.-->\n\
\n\
    <CreateGlobal name=\"String\" size=\"15M\" >\n\
      <Options smallSect=\"4 8 16 32 48 64 80 96 128 160 192 256\" />\n\
    </CreateGlobal>\n\
\n\
  </Shared>\n\
\n\
</Platform>\n"