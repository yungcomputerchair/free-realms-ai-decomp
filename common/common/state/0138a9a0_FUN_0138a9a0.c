// addr: 0x0138a9a0
// name: FUN_0138a9a0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0138a9a0(int param_1,undefined4 param_2,int param_3,void *param_4,bool param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  int value_;
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016838bb;
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
  FUN_012f8c70(0x7c);
  DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 0x2c));
  value_ = PlayElement_getId();
  DisplayActionBuilder_addIntArg(this,value_);
  DisplayActionBuilder_addIntArg(this,param_3);
  DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 0x34));
  DisplayAction_addArgValueData(this,param_4);
  DisplayActionBuilder_addBoolArg(this,param_5);
  (**(code **)(**(int **)(param_1 + 0x30) + 0x154))(this);
  ExceptionList = local_c;
  return;
}

