// addr: 0x012d2260
// name: ClientApplication_removeLobby
// subsystem: common/common/client
// source (binary assert): common/common/client/ClientApplication.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientApplication_removeLobby(void * this, void * lobbyPtr) */

void __thiscall ClientApplication_removeLobby(void *this,void *lobbyPtr)

{
  int *piVar1;
  rsize_t _DstSize;
  int iVar2;
  int *_Dst;
  
                    /* Searches the ClientApplication pointer vector at offsets 0xa0..0xa4 for the
                       supplied non-null lobby and erases the matching entry by shifting later
                       elements down. Evidence is the ClientApplication.cpp lobby assertion and
                       vector erase shape. */
  if (lobbyPtr == (void *)0x0) {
    FUN_012f5a60("lobby","..\\common\\common\\client\\ClientApplication.cpp",0x24f);
  }
  piVar1 = *(int **)((int)this + 0xa4);
  if (piVar1 < *(int **)((int)this + 0xa0)) {
    FUN_00d83c2d();
  }
  _Dst = *(int **)((int)this + 0xa0);
  if (*(int **)((int)this + 0xa4) < _Dst) {
    FUN_00d83c2d();
  }
  for (; (_Dst != piVar1 && ((void *)*_Dst != lobbyPtr)); _Dst = _Dst + 1) {
  }
  piVar1 = *(int **)((int)this + 0xa4);
  if (piVar1 < *(int **)((int)this + 0xa0)) {
    FUN_00d83c2d();
  }
  if (this == (void *)0xffffff64) {
    FUN_00d83c2d();
  }
  if (_Dst != piVar1) {
    iVar2 = *(int *)((int)this + 0xa4) - (int)(_Dst + 1) >> 2;
    if (0 < iVar2) {
      _DstSize = iVar2 * 4;
      _memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
    }
    *(int *)((int)this + 0xa4) = *(int *)((int)this + 0xa4) + -4;
  }
  return;
}

