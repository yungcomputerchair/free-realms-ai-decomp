// addr: 0x01304d70
// name: StdTree_Node21_iteratorNext_01304d70
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StdTree_Node21_iteratorNext_01304d70(void * param_1) */

void * __fastcall StdTree_Node21_iteratorNext_01304d70(void *param_1)

{
                    /* Wrapper that advances a checked tree iterator with node sentinel byte +0x21
                       and returns the iterator object. Evidence: it calls 01303940, whose logic
                       walks parent/child links to find the in-order successor. */
  FUN_01303940();
  return param_1;
}

