// addr: 0x00793a20
// name: FUN_00793a20
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: bool FUN_00793a20(void * this, undefined4) */

bool __thiscall FUN_00793a20(void *this,undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 local_30 [3];
  undefined4 local_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Initializes/updates a primitive-manager resource for an actor/effect target
                       and stores transform or bounds state. Exact class role is not visible. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0155adcb;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined4 *)((int)this + 0x390) = in_stack_00000010;
  local_24 = 0;
  *(undefined4 *)((int)this + 0x394) = in_stack_00000014;
  *(undefined4 *)((int)this + 0x398) = in_stack_00000018;
  *(undefined4 *)((int)this + 0x39c) = 0;
  if (*(int *)((int)this + 0x264) == 0) {
    pvVar1 = Mem_Alloc(0x10);
    local_14 = 0;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = Deep_VisibilityCamera_ctor
                        ((int)(*(int *)((int)this + 0x244) +
                              (*(int *)((int)this + 0x244) >> 0x1f & 3U)) >> 2,
                         (int)(*(int *)((int)this + 0x248) +
                              (*(int *)((int)this + 0x248) >> 0x1f & 3U)) >> 2,1,DAT_017ed858);
    }
    local_14 = 0xffffffff;
    iVar3 = Deep_createPrimitiveManagerResource(uVar2,1);
    *(int *)((int)this + 0x264) = iVar3;
    *(undefined4 *)(iVar3 + 0x164) = *(undefined4 *)((int)this + 0x268);
    FUN_00733460(*(undefined4 *)((int)this + 0x264));
  }
  local_30[0] = param_1;
  local_24 = _DAT_0175b420;
  FUN_00792c90(local_30);
  FUN_00792e20((undefined4 *)((int)this + 0x390));
  ExceptionList = local_1c;
  return true;
}

