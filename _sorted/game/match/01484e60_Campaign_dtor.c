// addr: 0x01484e60
// name: Campaign_dtor
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Campaign_dtor(void * this) */

void __fastcall Campaign_dtor(void *this)

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
  
                    /* Destroys a Campaign object: installs Campaign vftable, deletes owned
                       pointer-vector elements, frees vector storage and three std::string buffers,
                       then restores PersistentComponent/PersistentBase vtables. */
  puStack_8 = &LAB_016a10fc;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  *(undefined ***)this = Campaign::vftable;
  local_4 = 4;
  piVar1 = *(int **)((int)this + 0x68);
  if (piVar1 < *(int **)((int)this + 100)) {
    FUN_00d83c2d(uVar2);
  }
  piVar4 = *(int **)((int)this + 100);
  if (*(int **)((int)this + 0x68) < piVar4) {
    FUN_00d83c2d(uVar2);
  }
  while( true ) {
    if (this == (void *)0xffffffa0) {
      FUN_00d83c2d(uVar2);
    }
    if (piVar4 == piVar1) break;
    if (this == (void *)0xffffffa0) {
      FUN_00d83c2d(uVar2);
    }
    if (*(int **)((int)this + 0x68) <= piVar4) {
      FUN_00d83c2d(uVar2);
    }
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
    if (*(int **)((int)this + 0x68) <= piVar4) {
      FUN_00d83c2d();
    }
    piVar4 = piVar4 + 1;
  }
  _Src = *(void **)((int)this + 0x68);
  if (_Src < *(void **)((int)this + 100)) {
    FUN_00d83c2d(uVar2);
  }
  _Dst = *(void **)((int)this + 100);
  if (*(void **)((int)this + 0x68) < _Dst) {
    FUN_00d83c2d(uVar2);
  }
  if (_Dst != _Src) {
    iVar3 = *(int *)((int)this + 0x68) - (int)_Src >> 2;
    _DstSize = iVar3 * 4;
    if (0 < iVar3) {
      _memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    *(void **)((int)this + 0x68) = (void *)(_DstSize + (int)_Dst);
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  if (*(void **)((int)this + 100) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 100));
  }
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0xf < *(uint *)((int)this + 0x5c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x48));
  }
  *(undefined4 *)((int)this + 0x5c) = 0xf;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined1 *)((int)this + 0x48) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0xf < *(uint *)((int)this + 0x40)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x2c));
  }
  *(undefined4 *)((int)this + 0x40) = 0xf;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < *(uint *)((int)this + 0x24)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x10));
  }
  *(undefined4 *)((int)this + 0x24) = 0xf;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined ***)this = PersistentComponent::vftable;
  *(undefined ***)this = PersistentBase::vftable;
  ExceptionList = local_c;
  return;
}

