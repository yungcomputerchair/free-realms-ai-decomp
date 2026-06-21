// addr: 0x013568c0
// name: Card_removePlayElementId
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Card_removePlayElementId(void * this, void * id) */

void __thiscall Card_removePlayElementId(void *this,void *id)

{
  int *piVar1;
  rsize_t _DstSize;
  int iVar2;
  int *_Dst;
  
                    /* Removes an InstanceID from a Card/PlayElement vector around offsets
                       0x2dc..0x2e0 by scanning and shifting remaining entries. Card-specific
                       evidence comes from adjacent PlayElement/Card methods and InstanceID storage
                       layout. */
  if (id != (void *)0x0) {
    iVar2 = PlayElement_getId();
    piVar1 = *(int **)((int)this + 0x2e0);
    if (piVar1 < *(int **)((int)this + 0x2dc)) {
      FUN_00d83c2d();
    }
    _Dst = *(int **)((int)this + 0x2dc);
    if (*(int **)((int)this + 0x2e0) < _Dst) {
      FUN_00d83c2d();
    }
    for (; (_Dst != piVar1 && (*_Dst != iVar2)); _Dst = _Dst + 1) {
    }
    piVar1 = *(int **)((int)this + 0x2e0);
    if (piVar1 < *(int **)((int)this + 0x2dc)) {
      FUN_00d83c2d();
    }
    if (this == (void *)0xfffffd28) {
      FUN_00d83c2d();
    }
    if (_Dst != piVar1) {
      iVar2 = *(int *)((int)this + 0x2e0) - (int)(_Dst + 1) >> 2;
      if (0 < iVar2) {
        _DstSize = iVar2 * 4;
        _memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
      }
      *(int *)((int)this + 0x2e0) = *(int *)((int)this + 0x2e0) + -4;
    }
  }
  return;
}

