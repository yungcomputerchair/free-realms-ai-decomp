// addr: 0x012d4730
// name: FUN_012d4730
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_012d4730(int param_1,void *param_2)

{
  int iVar1;
  uint uVar2;
  int extraout_EAX;
  int iVar3;
  void *this;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016704fb;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  this = (void *)0x0;
  *(void **)(param_1 + 0x40) = param_2;
  if (0 < (int)param_2) {
    TimeStamp_setCurrentFtime(local_14);
    *(undefined4 *)(param_1 + 0x44) = local_14[0];
    *(undefined4 *)(param_1 + 0x48) = local_14[0];
  }
  param_2 = Mem_Alloc(0x14);
  local_4 = 0;
  if (param_2 != (void *)0x0) {
    this = (void *)FUN_012f9eb0(uVar2);
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0x4f);
  DisplayActionBuilder_addCStringArg(this,"draftTimer");
  DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 0x40));
  param_2 = this;
  DisplayActionManager_ensureSingleton();
  iVar1 = *(int *)(extraout_EAX + 0x14);
  iVar3 = FUN_012d1bc0(iVar1,*(undefined4 *)(iVar1 + 4),&param_2);
  FUN_012d2590(1);
  *(int *)(iVar1 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  ExceptionList = local_c;
  return;
}

