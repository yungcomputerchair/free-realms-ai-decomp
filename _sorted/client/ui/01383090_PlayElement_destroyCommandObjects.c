// addr: 0x01383090
// name: PlayElement_destroyCommandObjects
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayElement_destroyCommandObjects(void * this) */

void __fastcall PlayElement_destroyCommandObjects(void *this)

{
  rsize_t _DstSize;
  uint uVar1;
  void *_Dst;
  void *pvVar2;
  int iVar3;
  int in_EDX;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  uint uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  undefined4 uVar9;
  
                    /* Iterates a vector of PlayElement children, dynamic_casts them to
                       CommandObject, releases/destroys matches, then compacts the vector. Evidence
                       is PlayElement-to-CommandObject RTTI dynamic_cast and memmove compaction. */
  uVar1 = *(uint *)((int)this + 0x34);
  if (uVar1 < *(uint *)((int)this + 0x30)) {
    FUN_00d83c2d();
    in_EDX = extraout_EDX;
  }
  uVar4 = *(uint *)((int)this + 0x30);
  if (*(uint *)((int)this + 0x34) < uVar4) {
    FUN_00d83c2d();
    in_EDX = extraout_EDX_00;
  }
  while( true ) {
    if (this == (void *)0xffffffd4) {
      FUN_00d83c2d();
      in_EDX = extraout_EDX_01;
    }
    if (uVar4 == uVar1) break;
    if (this == (void *)0xffffffd4) {
      FUN_00d83c2d();
      in_EDX = extraout_EDX_02;
    }
    if (*(uint *)((int)this + 0x34) <= uVar4) {
      FUN_00d83c2d();
      in_EDX = extraout_EDX_03;
    }
    uVar9 = 0;
    pTVar8 = &CommandObject::RTTI_Type_Descriptor;
    pTVar7 = &PlayElement::RTTI_Type_Descriptor;
    uVar6 = 0;
    pvVar2 = find_play_element_in_maps(*(void **)((int)this + 4),in_EDX);
    uVar5 = FUN_00d8d382(pvVar2,uVar6,pTVar7,pTVar8,uVar9);
    in_EDX = (int)((ulonglong)uVar5 >> 0x20);
    if ((undefined4 *)uVar5 != (undefined4 *)0x0) {
      (**(code **)*(undefined4 *)uVar5)(1);
      in_EDX = extraout_EDX_04;
    }
    if (*(uint *)((int)this + 0x34) <= uVar4) {
      FUN_00d83c2d();
      in_EDX = extraout_EDX_05;
    }
    uVar4 = uVar4 + 4;
  }
  pvVar2 = *(void **)((int)this + 0x34);
  if (pvVar2 < *(void **)((int)this + 0x30)) {
    FUN_00d83c2d();
  }
  _Dst = *(void **)((int)this + 0x30);
  if (*(void **)((int)this + 0x34) < _Dst) {
    FUN_00d83c2d();
  }
  if (_Dst != pvVar2) {
    iVar3 = *(int *)((int)this + 0x34) - (int)pvVar2 >> 2;
    _DstSize = iVar3 * 4;
    if (0 < iVar3) {
      _memmove_s(_Dst,_DstSize,pvVar2,_DstSize);
    }
    *(void **)((int)this + 0x34) = (void *)(_DstSize + (int)_Dst);
  }
  return;
}

