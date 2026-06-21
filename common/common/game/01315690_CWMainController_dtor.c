// addr: 0x01315690
// name: CWMainController_dtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWMainController_dtor(void * this) */

void __fastcall CWMainController_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Destructor body for CWMainController: installs CWMainController vtables,
                       deletes owned interface pointers, releases strings, and calls base cleanup.
                        */
  puStack_8 = &LAB_01677af0;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *(undefined ***)this = CWMainController::vftable;
  *(undefined ***)((int)this + 0x10) = CWMainController::vftable;
  local_4 = 4;
  if (*(undefined4 **)((int)this + 0x410) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x410))(1,uVar1);
    *(undefined4 *)((int)this + 0x410) = 0;
  }
  if (*(undefined4 **)((int)this + 0x40c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x40c))(1);
    *(undefined4 *)((int)this + 0x40c) = 0;
  }
  if (*(undefined4 **)((int)this + 0x458) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x458))(1);
    *(undefined4 *)((int)this + 0x458) = 0;
  }
  if (*(undefined4 **)((int)this + 0x45c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x45c))(1);
  }
  FUN_01315050();
  local_4 = CONCAT31(local_4._1_3_,3);
  if (0xf < *(uint *)((int)this + 0x498)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x484));
  }
  *(undefined4 *)((int)this + 0x498) = 0xf;
  *(undefined4 *)((int)this + 0x494) = 0;
  *(undefined1 *)((int)this + 0x484) = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0xf < *(uint *)((int)this + 0x47c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x468));
  }
  *(undefined4 *)((int)this + 0x47c) = 0xf;
  *(undefined4 *)((int)this + 0x478) = 0;
  *(undefined1 *)((int)this + 0x468) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0xf < *(uint *)((int)this + 0x454)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x440));
  }
  *(undefined4 *)((int)this + 0x454) = 0xf;
  *(undefined4 *)((int)this + 0x450) = 0;
  *(undefined1 *)((int)this + 0x440) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < *(uint *)((int)this + 0x438)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x424));
  }
  *(undefined4 *)((int)this + 0x438) = 0xf;
  *(undefined4 *)((int)this + 0x434) = 0;
  *(undefined1 *)((int)this + 0x424) = 0;
  local_4 = 0xffffffff;
  CWGame_dtor(this);
  ExceptionList = local_c;
  return;
}

