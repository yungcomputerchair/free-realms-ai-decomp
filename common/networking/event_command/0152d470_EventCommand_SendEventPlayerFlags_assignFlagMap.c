// addr: 0x0152d470
// name: EventCommand_SendEventPlayerFlags_assignFlagMap
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_SendEventPlayerFlags_assignFlagMap(void * this) */

void __fastcall EventCommand_SendEventPlayerFlags_assignFlagMap(void *this)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Clears the SendEventPlayerFlags map/tree member, resets its sentinel links
                       and size, then copies/rebuilds entries through map helper calls. Evidence is
                       the same +0xc/+0x10 tree layout used by SendEventPlayerFlags ctor/dtor and
                       its use from cloneInto. */
  puStack_8 = &LAB_016ba908;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  local_4 = 0;
  puVar1 = (undefined1 *)((int)this + 8);
  FUN_004ef7fa(*(undefined4 *)(*(int *)((int)this + 0xc) + 4));
  *(int *)(*(int *)((int)this + 0xc) + 4) = *(int *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)*(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(int *)(*(int *)((int)this + 0xc) + 8) = *(int *)((int)this + 0xc);
  if (puVar1 != &stack0x00000004) {
    FUN_005152ac(local_14,puVar1,**(undefined4 **)((int)this + 0xc),puVar1,
                 *(undefined4 **)((int)this + 0xc));
    FUN_012415a0(&stack0x00000004);
  }
  local_4 = 0xffffffff;
  FUN_00521a9c(uVar2);
  ExceptionList = local_c;
  return;
}

