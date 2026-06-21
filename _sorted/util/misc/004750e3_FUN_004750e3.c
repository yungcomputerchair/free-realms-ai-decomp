// addr: 0x004750e3
// name: FUN_004750e3
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int get_or_create_texture_tile(int * resource, int * tileKey) */

int get_or_create_texture_tile(int *resource,int *tileKey)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int **ppiVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
                    /* Finds or creates a cached texture/tile object for a resource and key,
                       maintaining a vector of tile entries and reference-counting an existing tile
                       if present. Class identity is not evident. */
  piVar11 = resource;
  uVar12 = 0;
  local_8 = 0;
  if (resource[0x11] == 0) {
    bVar1 = true;
  }
  else {
    piVar3 = (int *)(**(code **)(*resource + 0x154))(&local_14);
    if ((*piVar3 < 1) || (piVar3[1] < 1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  if (bVar1) {
    return 0;
  }
  piVar3 = (int *)(**(code **)(*piVar11 + 0x170))();
  if (piVar3 == (int *)0x0) {
    FUN_0047bf1b(&resource);
    uVar4 = FUN_004cd10a();
    iVar8 = (**(code **)(*piVar11 + 8))(uVar4,0);
    if (iVar8 != 0) {
      uVar7 = piVar11[0x1b];
      uVar5 = FUN_0045c1b7();
      if (uVar7 < uVar5) {
        ppiVar6 = (int **)FUN_0045c1ca(uVar7);
      }
      else {
        local_8 = 1;
        resource = (int *)0x0;
        ppiVar6 = &resource;
      }
      piVar11 = *ppiVar6;
      if (((local_8 & 1) != 0) && (resource != (int *)0x0)) {
        (**(code **)(*resource + 0x10))(0);
      }
    }
    if (piVar11 == (int *)0x0) {
      return 0;
    }
    pvVar9 = Mem_Alloc(0x28);
    if (pvVar9 == (void *)0x0) {
      resource = (int *)0x0;
    }
    else {
      resource = (int *)FUN_004740cf(local_c,piVar11);
    }
    piVar3 = resource;
    if (resource == (int *)0x0) {
      return 0;
    }
  }
  resource = piVar3;
  piVar11 = tileKey;
  if (*tileKey != 0) {
    uVar12 = 1;
    uVar7 = FUN_0045c30d();
    if (1 < uVar7) {
      do {
        piVar3 = piVar11;
        FUN_0045c320(uVar12);
        cVar2 = FUN_0045fc88(piVar3);
        if (cVar2 != '\0') break;
        uVar12 = uVar12 + 1;
        uVar7 = FUN_0045c30d();
      } while (uVar12 < uVar7);
    }
  }
  uVar7 = FUN_0045c30d();
  if (uVar7 <= uVar12) {
    local_2c = *piVar11;
    local_28 = piVar11[1];
    local_24 = piVar11[2];
    local_20 = 0;
    iVar8 = FUN_0045c30d();
    if (iVar8 == 0) {
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      FUN_00474b27(&local_1c);
    }
    if (uVar12 != 0) {
      uVar12 = FUN_0045c30d();
      FUN_00474b27(&local_2c);
    }
  }
  iVar10 = 0;
  iVar8 = FUN_0045c320(uVar12);
  if (*(int *)(iVar8 + 0xc) == 0) {
    pvVar9 = Mem_Alloc(0x58);
    if (pvVar9 != (void *)0x0) {
      iVar10 = FUN_0046a924(*(undefined4 *)(local_c + 0xc),resource,uVar12);
    }
    if (iVar10 == 0) {
      return 0;
    }
    iVar8 = FUN_0045c320(uVar12);
    *(int *)(iVar8 + 0xc) = iVar10;
    return iVar10;
  }
  iVar8 = FUN_0045c320(uVar12);
  iVar8 = *(int *)(iVar8 + 0xc);
  piVar11 = (int *)(iVar8 + 8);
  *piVar11 = *piVar11 + 1;
  return iVar8;
}

