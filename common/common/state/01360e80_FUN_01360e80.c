// addr: 0x01360e80
// name: FUN_01360e80
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_01360e80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool *pbVar4;
  int *piVar5;
  int *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  pbVar4 = IntToBoolMap_getOrInsert((void *)(param_1 + 0x1cc),&stack0x00000004,unaff_EDI);
  *pbVar4 = false;
  piVar5 = (int *)FUN_01331340(local_8,&stack0x00000004);
  iVar1 = *piVar5;
  iVar2 = piVar5[1];
  iVar3 = *(int *)(param_1 + 0x204);
  if ((iVar1 == 0) || (iVar1 != param_1 + 0x200)) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar3) {
    FUN_0135d180(local_8,iVar1,iVar2);
  }
  return;
}

