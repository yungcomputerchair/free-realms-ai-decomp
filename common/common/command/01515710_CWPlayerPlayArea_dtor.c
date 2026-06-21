// addr: 0x01515710
// name: CWPlayerPlayArea_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWPlayerPlayArea_dtor(void * this) */

void __fastcall CWPlayerPlayArea_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CWPlayerPlayArea; frees its extra owned member and then chains
                       to PlayerPlayArea destruction. */
  puStack_8 = &LAB_016b7288;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = CWPlayerPlayArea::vftable;
  *(undefined ***)((int)this + 8) = CWPlayerPlayArea::vftable;
  local_4 = 0;
  if (*(void **)((int)this + 0x54) != (void *)0x0) {
    PlayElement_detachFromParent(*(void **)((int)this + 0x54));
    if (*(undefined4 **)((int)this + 0x54) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 0x54))(1,uVar1);
    }
  }
  local_4 = 0xffffffff;
  PlayerPlayArea_dtor(this);
  ExceptionList = local_c;
  return;
}

