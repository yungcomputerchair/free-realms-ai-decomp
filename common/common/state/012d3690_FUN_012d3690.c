// addr: 0x012d3690
// name: FUN_012d3690
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_012d3690(int param_1,void *param_2)

{
  int iVar1;
  uint uVar2;
  void *this;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Generic DisplayAction builder/helper that allocates a display action and adds
                       int/string/vector arguments; no class/method string identifies a specific
                       command. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01670286;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(char *)(param_1 + 0x60) = (char)param_2;
  if ((char)param_2 == '\x01') {
    param_2 = Mem_Alloc(0x14);
    local_4 = 0;
    if (param_2 == (void *)0x0) {
      this = (void *)0x0;
    }
    else {
      this = (void *)FUN_012f9eb0(uVar2);
    }
    local_4 = 0xffffffff;
    FUN_012f8c70(0x5c);
    DisplayActionBuilder_addCStringArg(this,"Please wait while you are reconnected to your game.");
  }
  else {
    param_2 = Mem_Alloc(0x14);
    local_4 = 1;
    if (param_2 == (void *)0x0) {
      this = (void *)0x0;
    }
    else {
      this = (void *)FUN_012f9eb0(uVar2);
    }
    local_4 = 0xffffffff;
    FUN_012f8c70(0x5d);
  }
  DisplayActionBuilder_addIntArg(this,1);
  iVar1 = *(int *)(param_1 + 0x14);
  param_2 = this;
  iVar3 = FUN_012d1bc0(iVar1,*(undefined4 *)(iVar1 + 4),&param_2);
  FUN_012d2590(1);
  *(int *)(iVar1 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  ExceptionList = local_c;
  return;
}

