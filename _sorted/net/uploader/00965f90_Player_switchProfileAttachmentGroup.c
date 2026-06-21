// addr: 0x00965f90
// name: Player_switchProfileAttachmentGroup
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Player_switchProfileAttachmentGroup(void * player, void * profile, void *
   arg, bool resetFirst_) */

int __thiscall
Player_switchProfileAttachmentGroup
          (void *this,void *player,void *profile,void *arg,bool resetFirst_)

{
  int iVar1;
  uint flags_;
  void *this_00;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Clears any current attachment group, creates a
                       PlayerSwitchProfileAttachmentGroup controller/event, registers it, and stores
                       its handle. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159662b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = (void *)0x0;
  if (*(int *)((int)this + 0x518) != 0) {
    iVar1 = FUN_0072a0d0();
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 0x66) = 1;
    }
    *(undefined4 *)((int)this + 0x518) = 0;
  }
  if ((char)arg != '\0') {
    FUN_0095d6c0();
  }
  FUN_00769ab0();
  flags_ = FUN_007c4710();
  this_00 = Mem_Alloc(0x198);
  local_4 = 0;
  if (this_00 != (void *)0x0) {
    pvVar2 = PlayerSwitchProfileAttachmentGroup_ctor
                       (this_00,*(void **)((int)this + 0x58),*(void **)((int)this + 0x734),this,
                        *(uint *)((int)this + 0x5a4),*(uint *)((int)this + 0x5d4),
                        *(uint *)((int)this + 0x6ec),*(uint *)(*(int *)((int)this + 0x738) + 0x13c),
                        (uint)player,flags_);
  }
  local_4 = 0xffffffff;
  if (pvVar2 != (void *)0x0) {
    FUN_0072c400();
    *(undefined4 *)((int)this + 0x518) = *(undefined4 *)((int)pvVar2 + 0xc);
  }
  ExceptionList = local_c;
  return (int)pvVar2;
}

