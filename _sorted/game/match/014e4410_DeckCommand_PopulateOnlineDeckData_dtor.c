// addr: 0x014e4410
// name: DeckCommand_PopulateOnlineDeckData_dtor
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DeckCommand_PopulateOnlineDeckData_dtor(void * this) */

void __fastcall DeckCommand_PopulateOnlineDeckData_dtor(void *this)

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
  uint local_4;
  
                    /* Destroys DeckCommand_PopulateOnlineDeckData: installs its vftable, deletes
                       owned pointers in the vector at +8, frees storage, then calls
                       DeckCommand_dtor. */
  puStack_8 = &LAB_016afaa3;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *(undefined ***)this = DeckCommand_PopulateOnlineDeckData::vftable;
  local_4 = 1;
  piVar1 = *(int **)((int)this + 0xc);
  if (piVar1 < *(int **)((int)this + 8)) {
    FUN_00d83c2d(uVar2);
  }
  piVar4 = *(int **)((int)this + 8);
  if (*(int **)((int)this + 0xc) < piVar4) {
    FUN_00d83c2d(uVar2);
  }
  while( true ) {
    if (this == (void *)0xfffffffc) {
      FUN_00d83c2d(uVar2);
    }
    if (piVar4 == piVar1) break;
    if (this == (void *)0xfffffffc) {
      FUN_00d83c2d(uVar2);
    }
    if (*(int **)((int)this + 0xc) <= piVar4) {
      FUN_00d83c2d(uVar2);
    }
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
    if (*(int **)((int)this + 0xc) <= piVar4) {
      FUN_00d83c2d();
    }
    piVar4 = piVar4 + 1;
  }
  _Src = *(void **)((int)this + 0xc);
  if (_Src < *(void **)((int)this + 8)) {
    FUN_00d83c2d(uVar2);
  }
  _Dst = *(void **)((int)this + 8);
  if (*(void **)((int)this + 0xc) < _Dst) {
    FUN_00d83c2d(uVar2);
  }
  if (_Dst != _Src) {
    iVar3 = *(int *)((int)this + 0xc) - (int)_Src >> 2;
    _DstSize = iVar3 * 4;
    if (0 < iVar3) {
      _memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    *(void **)((int)this + 0xc) = (void *)(_DstSize + (int)_Dst);
  }
  local_4 = local_4 & 0xffffff00;
  if (*(void **)((int)this + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  local_4 = 0xffffffff;
  DeckCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

