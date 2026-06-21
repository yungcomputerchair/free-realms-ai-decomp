// addr: 0x013099a0
// name: StdTree_Node21_destroyAndFreeHead_013099a0
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdTree_Node21_destroyAndFreeHead_013099a0(void * param_1) */

void __fastcall StdTree_Node21_destroyAndFreeHead_013099a0(void *param_1)

{
  undefined1 local_8 [8];
  
                    /* Destructor-style helper for a node+0x21 tree: erases the full range and frees
                       the header/sentinel allocation. Evidence: calls 01308260 over begin/end
                       before freeing *(param_1+4). */
  FUN_01308260(local_8,param_1,**(undefined4 **)((int)param_1 + 4),param_1,
               *(undefined4 **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}

