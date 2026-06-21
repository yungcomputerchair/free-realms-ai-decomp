// addr: 0x01382f30
// name: CommandObjectVector_clear
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectVector_clear(void * owner) */

void __fastcall CommandObjectVector_clear(void *owner)

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
  
                    /* Deletes CommandObject instances stored in a vector range after RTTI-casting
                       PlayElement to CommandObject, then compacts the vector to empty. */
  uVar1 = *(uint *)((int)owner + 0x24);
  if (uVar1 < *(uint *)((int)owner + 0x20)) {
    FUN_00d83c2d();
    in_EDX = extraout_EDX;
  }
  uVar4 = *(uint *)((int)owner + 0x20);
  if (*(uint *)((int)owner + 0x24) < uVar4) {
    FUN_00d83c2d();
    in_EDX = extraout_EDX_00;
  }
  while( true ) {
    if (owner == (void *)0xffffffe4) {
      FUN_00d83c2d();
      in_EDX = extraout_EDX_01;
    }
    if (uVar4 == uVar1) break;
    if (owner == (void *)0xffffffe4) {
      FUN_00d83c2d();
      in_EDX = extraout_EDX_02;
    }
    if (*(uint *)((int)owner + 0x24) <= uVar4) {
      FUN_00d83c2d();
      in_EDX = extraout_EDX_03;
    }
    uVar9 = 0;
    pTVar8 = &CommandObject::RTTI_Type_Descriptor;
    pTVar7 = &PlayElement::RTTI_Type_Descriptor;
    uVar6 = 0;
    pvVar2 = find_play_element_in_maps(*(void **)((int)owner + 4),in_EDX);
    uVar5 = FUN_00d8d382(pvVar2,uVar6,pTVar7,pTVar8,uVar9);
    in_EDX = (int)((ulonglong)uVar5 >> 0x20);
    if ((undefined4 *)uVar5 != (undefined4 *)0x0) {
      (**(code **)*(undefined4 *)uVar5)(1);
      in_EDX = extraout_EDX_04;
    }
    if (*(uint *)((int)owner + 0x24) <= uVar4) {
      FUN_00d83c2d();
      in_EDX = extraout_EDX_05;
    }
    uVar4 = uVar4 + 4;
  }
  pvVar2 = *(void **)((int)owner + 0x24);
  if (pvVar2 < *(void **)((int)owner + 0x20)) {
    FUN_00d83c2d();
  }
  _Dst = *(void **)((int)owner + 0x20);
  if (*(void **)((int)owner + 0x24) < _Dst) {
    FUN_00d83c2d();
  }
  if (_Dst != pvVar2) {
    iVar3 = *(int *)((int)owner + 0x24) - (int)pvVar2 >> 2;
    _DstSize = iVar3 * 4;
    if (0 < iVar3) {
      _memmove_s(_Dst,_DstSize,pvVar2,_DstSize);
    }
    *(void **)((int)owner + 0x24) = (void *)(_DstSize + (int)_Dst);
  }
  return;
}

