// addr: 0x0041e189
// name: RenderResource_updateAuxiliarySurfaces
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int RenderResource_updateAuxiliarySurfaces(void * this, char
   wantExtraSurface_) */

int __thiscall RenderResource_updateAuxiliarySurfaces(void *this,char wantExtraSurface_)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 local_10;
  undefined4 local_c;
  char local_6;
  char local_5;
  
                    /* Ensures auxiliary resource handles exist or are destroyed according to object
                       flags at +0x60 and parameter state, using a vtable-backed resource manager
                       and storing handles in a helper at +0xe4. Name is behavior-based only. */
  local_5 = '\0';
  piVar2 = (int *)FUN_00419c2b();
  piVar8 = (int *)0x0;
  if (piVar2 == (int *)0x0) goto LAB_0041e1a4;
  if (*(int *)((int)this + 0xe4) == 0) {
    pvVar4 = Mem_Alloc(0x18);
    if (pvVar4 == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_00406fc6();
    }
    *(int *)((int)this + 0xe4) = iVar5;
    piVar8 = (int *)0x0;
    if (iVar5 == 0) goto LAB_0041e1a4;
  }
  if (**(int **)((int)this + 0xe4) == 0) {
    local_c = 0;
    uVar7 = 0;
LAB_0041e251:
    if ((*(uint *)((int)this + 0x60) & 0x1000000) == 0) {
      uVar7 = (**(code **)(*piVar2 + 0x98))(uVar7,local_c,0);
      **(undefined4 **)((int)this + 0xe4) = uVar7;
      piVar8 = *(int **)((int)this + 0xe4);
      if (*piVar8 != 0) {
        local_5 = '\x01';
        local_6 = '\0';
        goto LAB_0041e2b9;
      }
    }
    else {
      uVar7 = (**(code **)(*piVar2 + 0x9c))(&LAB_0041dd72,this);
      **(undefined4 **)((int)this + 0xe4) = uVar7;
      piVar8 = *(int **)((int)this + 0xe4);
      if (*piVar8 != 0) {
        local_6 = '\x01';
        goto LAB_0041e2b9;
      }
    }
LAB_0041e1a4:
    uVar3 = (uint)piVar8 & 0xffffff00;
  }
  else {
    local_6 = (**(code **)(*piVar2 + 0xbc))(**(int **)((int)this + 0xe4));
    if ((bool)local_6 != ((*(uint *)((int)this + 0x60) & 0x1000000) != 0)) {
      puVar6 = (undefined4 *)
               (**(code **)(*piVar2 + 0xa4))(&local_10,**(undefined4 **)((int)this + 0xe4));
      local_c = puVar6[1];
      local_10 = *puVar6;
      (**(code **)(*piVar2 + 0xa0))(**(undefined4 **)((int)this + 0xe4));
      **(undefined4 **)((int)this + 0xe4) = 0;
      uVar7 = local_10;
      goto LAB_0041e251;
    }
LAB_0041e2b9:
    iVar5 = *(int *)((int)this + 0xe4);
    if (*(int *)(iVar5 + 8) == 0) {
      piVar8 = (int *)(**(code **)(*piVar2 + 0x98))(0,0,0);
      *(int **)(*(int *)((int)this + 0xe4) + 8) = piVar8;
      iVar5 = *(int *)((int)this + 0xe4);
      if (*(int *)(iVar5 + 8) == 0) goto LAB_0041e1a4;
    }
    if ((*(uint *)((int)this + 0x60) & 0x100000) == 0) {
      if (*(int *)(iVar5 + 0xc) != 0) {
        (**(code **)(*piVar2 + 0xa0))(*(int *)(iVar5 + 0xc));
        *(undefined4 *)(*(int *)((int)this + 0xe4) + 0xc) = 0;
LAB_0041e349:
        local_5 = '\x01';
      }
    }
    else if (*(int *)(iVar5 + 0xc) == 0) {
      uVar7 = (**(code **)(*piVar2 + 0x98))(0,0,0);
      *(undefined4 *)(*(int *)((int)this + 0xe4) + 0xc) = uVar7;
      piVar8 = *(int **)((int)this + 0xe4);
      if (piVar8[3] != 0) goto LAB_0041e349;
      goto LAB_0041e1a4;
    }
    piVar8 = *(int **)((int)this + 0xe4);
    if (wantExtraSurface_ == '\0') {
      piVar1 = piVar8 + 1;
      piVar8 = (int *)0x0;
      if (*piVar1 != 0) {
        (**(code **)(*piVar2 + 0xa0))(*piVar1);
        piVar8 = *(int **)((int)this + 0xe4);
        piVar8[1] = 0;
LAB_0041e3a5:
        local_5 = '\x01';
      }
    }
    else if (piVar8[1] == 0) {
      uVar7 = (**(code **)(*piVar2 + 0x98))(0,0,0);
      *(undefined4 *)(*(int *)((int)this + 0xe4) + 4) = uVar7;
      piVar8 = *(int **)((int)this + 0xe4);
      if (piVar8[1] != 0) goto LAB_0041e3a5;
      goto LAB_0041e1a4;
    }
    if ((local_5 != '\0') && (local_6 == '\0')) {
      (**(code **)(*piVar2 + 0xc0))(**(undefined4 **)((int)this + 0xe4));
      FUN_00406ff2(piVar2);
      piVar8 = (int *)(**(code **)(*piVar2 + 200))();
    }
    uVar3 = CONCAT31((int3)((uint)piVar8 >> 8),1);
  }
  return uVar3;
}

