// addr: 0x0142af20
// name: CommandObject_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_dtor(void * this) */

void __fastcall CommandObject_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Destructor for CommandObject: installs CommandObject vftables, detaches
                       PlayElement state, releases an owned command/action pointer, clears
                       evaluation data, frees the command name string, and runs PlayElement
                       destruction. */
  puStack_8 = &LAB_01695881;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject::vftable;
  *(undefined ***)((int)this + 8) = CommandObject::vftable;
  local_4 = 2;
  PlayElement_detachFromParent(this);
  if ((*(char *)((int)this + 0x80) == '\0') &&
     (*(undefined4 **)((int)this + 0x70) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)((int)this + 0x70))(1,uVar1);
    *(undefined4 *)((int)this + 0x70) = 0;
  }
  local_4._0_1_ = 1;
  FUN_01385460();
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < *(uint *)((int)this + 0x60)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x4c));
  }
  *(undefined4 *)((int)this + 0x60) = 0xf;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x4c) = 0;
  local_4 = 0xffffffff;
  PlayElement_dtor(this);
  ExceptionList = local_c;
  return;
}

