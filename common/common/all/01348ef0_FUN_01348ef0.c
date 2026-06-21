// addr: 0x01348ef0
// name: FUN_01348ef0
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_01348ef0(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167d3c8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  FUN_01419f30(*(undefined4 *)(param_1 + 0x138),param_1);
  local_4 = 0;
  iVar2 = MTRandom_getIntBelow(local_18,param_2);
  local_4 = 0xffffffff;
  FUN_01419f50(uVar1);
  ExceptionList = local_c;
  return iVar2;
}

