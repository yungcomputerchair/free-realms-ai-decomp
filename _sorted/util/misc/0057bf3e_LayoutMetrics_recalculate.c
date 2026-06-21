// addr: 0x0057bf3e
// name: LayoutMetrics_recalculate
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LayoutMetrics_recalculate(void * this) */

void __fastcall LayoutMetrics_recalculate(void *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Recalculates cached aggregate layout metrics by walking three child lists and
                       summing child widths/margins while taking max heights. Evidence is cached
                       fields at +0x64..+0x78, dirty flag +0x61, and repeated iterator traversal
                       over lists at +4/+0x24/+0x44. */
  if (*(char *)((int)this + 0x61) == '\0') {
    *(undefined4 *)((int)this + 100) = *(undefined4 *)((int)this + 0x7c);
    *(undefined4 *)((int)this + 0x68) = *(undefined4 *)((int)this + 0x80);
    *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x84);
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)((int)this + 0x88);
    *(undefined4 *)((int)this + 0x78) = *(undefined4 *)((int)this + 0x90);
    *(undefined4 *)((int)this + 0x74) = *(undefined4 *)((int)this + 0x8c);
    FUN_00553c83(**(undefined4 **)((int)this + 4),this);
    local_c = local_14;
    local_8 = local_10;
    while( true ) {
      FUN_00553c83(*(undefined4 *)((int)this + 4),this);
      cVar1 = FUN_00553441(&local_14);
      if (cVar1 != '\0') break;
      iVar2 = FUN_005627b4();
      iVar3 = FUN_005627b4();
      *(int *)((int)this + 100) =
           *(int *)((int)this + 100) + *(int *)(iVar3 + 0x14) + *(int *)(iVar2 + 4);
      iVar2 = FUN_005627b4();
      if (*(int *)((int)this + 0x68) < *(int *)(iVar2 + 8) + *(int *)((int)this + 0x80)) {
        iVar2 = FUN_005627b4();
        *(int *)((int)this + 0x68) = *(int *)(iVar2 + 8) + *(int *)((int)this + 0x80);
      }
      FUN_00563504();
    }
    FUN_00553c83(**(undefined4 **)((int)this + 0x24),(int)this + 0x20);
    local_c = local_14;
    uVar4 = *(undefined4 *)((int)this + 0x24);
    local_8 = local_10;
    while( true ) {
      FUN_00553c83(uVar4,(int)this + 0x20);
      cVar1 = FUN_00553441(&local_14);
      if (cVar1 != '\0') break;
      iVar2 = FUN_005627b4();
      iVar3 = FUN_005627b4();
      *(int *)((int)this + 0x6c) =
           *(int *)((int)this + 0x6c) + *(int *)(iVar2 + 4) + *(int *)(iVar3 + 0x14);
      iVar2 = FUN_005627b4();
      if (*(int *)((int)this + 0x70) < *(int *)(iVar2 + 8) + *(int *)((int)this + 0x88)) {
        iVar2 = FUN_005627b4();
        *(int *)((int)this + 0x70) = *(int *)(iVar2 + 8) + *(int *)((int)this + 0x88);
      }
      FUN_00563504();
      uVar4 = *(undefined4 *)((int)this + 0x24);
    }
    FUN_00553c83(**(undefined4 **)((int)this + 0x44),(int)this + 0x40);
    local_c = local_14;
    uVar4 = *(undefined4 *)((int)this + 0x44);
    local_8 = local_10;
    while( true ) {
      FUN_00553c83(uVar4,(int)this + 0x40);
      cVar1 = FUN_00553441(&local_14);
      if (cVar1 != '\0') break;
      iVar2 = FUN_005627b4();
      iVar3 = FUN_005627b4();
      *(int *)((int)this + 0x74) =
           *(int *)((int)this + 0x74) + *(int *)(iVar2 + 4) + *(int *)(iVar3 + 0x14);
      iVar2 = FUN_005627b4();
      if (*(int *)((int)this + 0x78) < *(int *)(iVar2 + 8) + *(int *)((int)this + 0x90)) {
        iVar2 = FUN_005627b4();
        *(int *)((int)this + 0x78) = *(int *)(iVar2 + 8) + *(int *)((int)this + 0x90);
      }
      FUN_00563504();
      uVar4 = *(undefined4 *)((int)this + 0x44);
    }
  }
  *(undefined1 *)((int)this + 0x61) = 1;
  return;
}

