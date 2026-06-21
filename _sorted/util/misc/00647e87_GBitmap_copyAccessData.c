// addr: 0x00647e87
// name: GBitmap_copyAccessData
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GBitmap_copyAccessData(void * this, void * source) */

bool __thiscall GBitmap_copyAccessData(void *this,void *source)

{
  undefined4 uVar1;
  void *pvVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined1 local_30 [12];
  undefined4 local_24;
  int *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  int *local_8;
  
                    /* Copies bitmap metadata and access-wrapper state from another bitmap-like
                       object, cloning per-entry GBitmapAccessWrapper objects and cleaning up on
                       failure. */
  pvVar2 = source;
  local_c = this;
  cVar3 = FUN_00437372(source);
  if (cVar3 == '\0') {
LAB_00647ea2:
    bVar4 = false;
  }
  else {
    uVar8 = *(uint *)((int)source + 0xec);
    uVar1 = *(undefined4 *)((int)source + 0xe8);
    *(undefined4 *)((int)this + 0xe8) = uVar1;
    uVar8 = uVar8 & 0xffffff;
    *(uint *)((int)this + 0xec) = uVar8;
    *(undefined4 *)((int)this + 0xf0) = uVar1;
    *(uint *)((int)this + 0xf4) = uVar8 | 0x80000000;
    *(undefined4 *)((int)this + 0x100) = *(undefined4 *)((int)source + 0x100);
    *(undefined4 *)((int)this + 0x140) = *(undefined4 *)((int)source + 0x140);
    *(undefined4 *)((int)this + 0x144) = *(undefined4 *)((int)source + 0x144);
    *(undefined4 *)((int)this + 0xf8) = *(undefined4 *)((int)source + 0xf8);
    piVar5 = (int *)((int)source + 0xfc);
    source = (void *)0x0;
    if (*piVar5 != 0) {
      source = (void *)FUN_004fdb5f(pvVar2,this);
    }
    FUN_0060f6b3(source);
    (**(code **)(*(int *)((int)this + 0x108) + 0x2c))(pvVar2,(int)pvVar2 + 0x108);
    FUN_00647ac8();
    if (*(int *)((int)pvVar2 + 0x130) != 0) {
      local_8 = Mem_Alloc(0xc);
      if (local_8 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        FUN_0062540a();
        piVar5 = local_8;
      }
      *(int **)((int)this + 0x130) = piVar5;
      if (piVar5 == (int *)0x0) {
        if (source != (void *)0x0) {
          iVar6 = *(int *)source;
LAB_00647f86:
          (**(code **)(iVar6 + 0x10))(0);
        }
        goto LAB_00647ea2;
      }
      FUN_0060d54e(**(undefined4 **)(*(int *)((int)pvVar2 + 0x130) + 4),
                   *(int *)((int)pvVar2 + 0x130));
      local_14 = local_1c;
      local_10 = local_18;
      FUN_0060d54e(*(undefined4 *)(*(int *)((int)pvVar2 + 0x130) + 4),*(int *)((int)pvVar2 + 0x130))
      ;
      cVar3 = FUN_0060d299(&local_1c);
      while (cVar3 == '\0') {
        piVar5 = Mem_Alloc(0x28);
        if (piVar5 == (int *)0x0) {
          local_8 = (int *)0x0;
        }
        else {
          FUN_0041493a();
          *piVar5 = (int)GBitmapAccessWrapper::vftable;
          local_8 = piVar5;
        }
        (**(code **)(*local_8 + 0x10))(local_c,&LAB_0060e51c,0,0,0);
        iVar6 = FUN_0060d572();
        piVar5 = local_8;
        cVar3 = (**(code **)(*local_8 + 0x2c))(pvVar2,*(undefined4 *)(iVar6 + 4));
        if (cVar3 == '\0') {
          (**(code **)(*piVar5 + 0xc))(1);
          if (source == (void *)0x0) goto LAB_00647ea2;
          iVar6 = *(int *)source;
          goto LAB_00647f86;
        }
        puVar7 = (undefined4 *)FUN_0060d572();
        local_24 = *puVar7;
        local_20 = piVar5;
        FUN_0062d853(local_30,&local_24);
        FUN_0060d810();
        FUN_0060d54e(*(undefined4 *)(*(int *)((int)pvVar2 + 0x130) + 4),
                     *(int *)((int)pvVar2 + 0x130));
        cVar3 = FUN_0060d299(&local_1c);
      }
    }
    if (source != (void *)0x0) {
      (**(code **)(*(int *)source + 0x10))(0);
    }
    bVar4 = true;
  }
  return bVar4;
}

