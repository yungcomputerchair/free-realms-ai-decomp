// addr: 0x012a3ef0
// name: StdTree_Node2D_destroyAndFreeHead_012a3ef0
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdTree_Node2D_destroyAndFreeHead_012a3ef0(void * param_1) */

void __fastcall StdTree_Node2D_destroyAndFreeHead_012a3ef0(void *param_1)

{
  int unaff_ESI;
  undefined1 local_8 [8];
  
                    /* Destroys a node+0x2d tree by erasing its full range and freeing the
                       header/sentinel allocation. Evidence: calls the range erase helper 012a3c30
                       over begin/end and then frees *(param_1+4). */
  StdTree_eraseRange(param_1,local_8,param_1,**(int **)((int)param_1 + 4),(int)param_1,
                     (int)*(int **)((int)param_1 + 4),unaff_ESI);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}

