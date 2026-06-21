// addr: 0x012a41e0
// name: StdTree_Node2D_destroyAndFreeHead_012a41e0
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdTree_Node2D_destroyAndFreeHead_012a41e0(void * param_1) */

void __fastcall StdTree_Node2D_destroyAndFreeHead_012a41e0(void *param_1)

{
  int unaff_ESI;
  undefined1 local_8 [8];
  
                    /* Destructor-style helper for another node+0x2d tree instantiation; erases all
                       nodes then frees the header/sentinel allocation. Evidence: body matches
                       012a3ef0 and calls the same range erase helper. */
  StdTree_eraseRange(param_1,local_8,param_1,**(int **)((int)param_1 + 4),(int)param_1,
                     (int)*(int **)((int)param_1 + 4),unaff_ESI);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}

