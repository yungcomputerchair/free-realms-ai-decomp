// addr: 0x01305b60
// name: StdTree_Node21_iteratorNext_01305b60
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StdTree_Node21_iteratorNext_01305b60(void * param_1) */

void * __fastcall StdTree_Node21_iteratorNext_01305b60(void *param_1)

{
                    /* Second wrapper that advances a node+0x21 tree iterator and returns it.
                       Evidence: body is the in-order successor helper 01303940 followed by
                       returning param_1. */
  FUN_01303940();
  return param_1;
}

