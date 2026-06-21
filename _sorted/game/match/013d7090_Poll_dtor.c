// addr: 0x013d7090
// name: Poll_dtor
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Poll_dtor(void * this) */

void __fastcall Poll_dtor(void *this)

{
  rsize_t _DstSize;
  int *piVar1;
  void *_Src;
  void *_Dst;
  uint uVar2;
  int iVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Destroys a Poll object: sets the Poll vtable, deletes owned pointer-vector
                       entries, frees vector/string buffers, then chains base vtables
                       PersistentComponent and PersistentBase. Evidence is the explicit
                       Poll::vftable, PersistentComponent::vftable, and PersistentBase::vftable
                       references. */
  puStack_8 = &LAB_0168ba51;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  *(undefined ***)this = Poll::vftable;
  local_4 = 3;
  piVar1 = *(int **)((int)this + 0x48);
  if (piVar1 < *(int **)((int)this + 0x44)) {
    FUN_00d83c2d(uVar2);
  }
  piVar4 = *(int **)((int)this + 0x44);
  if (*(int **)((int)this + 0x48) < piVar4) {
    FUN_00d83c2d(uVar2);
  }
  while( true ) {
    if (this == (void *)0xffffffc0) {
      FUN_00d83c2d(uVar2);
    }
    if (piVar4 == piVar1) break;
    if (this == (void *)0xffffffc0) {
      FUN_00d83c2d(uVar2);
    }
    if (*(int **)((int)this + 0x48) <= piVar4) {
      FUN_00d83c2d(uVar2);
    }
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
    if (*(int **)((int)this + 0x48) <= piVar4) {
      FUN_00d83c2d();
    }
    piVar4 = piVar4 + 1;
  }
  _Src = *(void **)((int)this + 0x48);
  if (_Src < *(void **)((int)this + 0x44)) {
    FUN_00d83c2d(uVar2);
  }
  _Dst = *(void **)((int)this + 0x44);
  if (*(void **)((int)this + 0x48) < _Dst) {
    FUN_00d83c2d(uVar2);
  }
  if (_Dst != _Src) {
    iVar3 = *(int *)((int)this + 0x48) - (int)_Src >> 2;
    _DstSize = iVar3 * 4;
    if (0 < iVar3) {
      _memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    *(void **)((int)this + 0x48) = (void *)(_DstSize + (int)_Dst);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  if (*(void **)((int)this + 0x44) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x44));
  }
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0xf < *(uint *)((int)this + 0x3c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x28));
  }
  *(undefined4 *)((int)this + 0x3c) = 0xf;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < *(uint *)((int)this + 0x20)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xc));
  }
  *(undefined4 *)((int)this + 0x20) = 0xf;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined ***)this = PersistentComponent::vftable;
  *(undefined ***)this = PersistentBase::vftable;
  ExceptionList = local_c;
  return;
}

