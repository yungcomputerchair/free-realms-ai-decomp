// addr: 0x00c454b0
// name: BaseActionBar_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * BaseActionBar_ctor(void * this, void * owner) */

void * __thiscall BaseActionBar_ctor(void *this,void *owner)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a BaseActionBar, stores the owner/context, installs
                       BaseActionBar::vftable, and initializes the ActionBarSlot hash list member.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015fbaeb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = BaseActionBar::vftable;
  *(void **)((int)this + 4) = owner;
  FUN_00c45310(uVar1);
  ExceptionList = local_c;
  return this;
}

