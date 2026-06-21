// addr: 0x0130b440
// name: StdTree_Node21_destroyAndFreeHead_0130b440
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdTree_Node21_destroyAndFreeHead_0130b440(void * param_1) */

void __fastcall StdTree_Node21_destroyAndFreeHead_0130b440(void *param_1)

{
  undefined1 local_8 [8];
  
                    /* Second destructor-style helper for a node+0x21 tree instantiation; erases all
                       nodes and frees the header/sentinel allocation. Evidence: body matches
                       013099a0 and calls the same erase-range helper. */
  FUN_01308260(local_8,param_1,**(undefined4 **)((int)param_1 + 4),param_1,
               *(undefined4 **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}

