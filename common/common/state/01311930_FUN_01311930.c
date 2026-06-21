// addr: 0x01311930
// name: FUN_01311930
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
FUN_01311930(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_8 [8];
  
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  iVar3 = param_3;
  iVar1 = **(int **)(param_1 + 4);
  if ((param_3 == 0) || (param_3 != param_1)) {
    FUN_00d83c2d();
  }
  iVar2 = param_4;
  if (param_4 == iVar1) {
    iVar1 = *(int *)(param_1 + 4);
    if ((param_5 == 0) || (param_5 != param_1)) {
      FUN_00d83c2d();
    }
    if (param_6 == iVar1) {
      StdTree_eraseSubtreeNodes(*(void **)(*(int *)(param_1 + 4) + 4));
      *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
      *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
      iVar1 = **(int **)(param_1 + 4);
      *param_2 = param_1;
      param_2[1] = iVar1;
      return;
    }
  }
  while( true ) {
    if ((iVar3 == 0) || (iVar3 != param_5)) {
      FUN_00d83c2d();
    }
    if (iVar2 == param_6) break;
    RBTreeIterator_increment(&param_3);
    FUN_01311480(local_8,iVar3,iVar2);
    iVar2 = param_4;
    iVar3 = param_3;
  }
  *param_2 = iVar3;
  param_2[1] = iVar2;
  return;
}

