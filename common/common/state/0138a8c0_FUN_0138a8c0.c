// addr: 0x0138a8c0
// name: FUN_0138a8c0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0138a8c0(int param_1,int param_2,void *param_3,bool param_4,bool param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Generic DisplayAction builder/helper that uses game flags to create an
                       action; no exact class/method name is visible. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168388b;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  bVar1 = Game_getFlag_14d(*(void **)(param_1 + 0x30));
  if ((bVar1) && (cVar2 = Game_getFlag_318(uVar3), cVar2 == '\0')) {
    ExceptionList = local_c;
    return;
  }
  pvVar4 = Mem_Alloc(0x14);
  this = (void *)0x0;
  local_4 = 0;
  if (pvVar4 != (void *)0x0) {
    this = (void *)FUN_012f9eb0();
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0x69);
  DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 0x2c));
  DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 0x34));
  DisplayActionBuilder_addIntArg(this,param_2);
  DisplayAction_addArgValueData(this,param_3);
  DisplayActionBuilder_addBoolArg(this,param_4);
  DisplayActionBuilder_addBoolArg(this,param_5);
  (**(code **)(**(int **)(param_1 + 0x30) + 0x154))(this);
  ExceptionList = local_c;
  return;
}

