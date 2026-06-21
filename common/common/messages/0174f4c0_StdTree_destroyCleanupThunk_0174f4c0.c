// addr: 0x0174f4c0
// name: StdTree_destroyCleanupThunk_0174f4c0
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdTree_destroyCleanupThunk(void * treeObj) */

void StdTree_destroyCleanupThunk_0174f4c0(void *treeObj)

{
                    /* EH/vector cleanup thunk that only tail-calls the shared std::_Tree
                       destruction helper for a tree object. Evidence is the entire body: a single
                       call to FUN_012a4570, whose context destroys a tree head and frees tree
                       storage. */
  MessageDB_IntTextMap_dtor(&DAT_01cbeb90);
  return;
}

