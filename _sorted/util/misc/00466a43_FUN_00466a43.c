// addr: 0x00466a43
// name: FUN_00466a43
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int create_tiled_texture_page(int thisObj_, int width_, int height_) */

int __thiscall create_tiled_texture_page(void *this,int thisObj_,int width_,int height_)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10 [2];
  int local_8;
  
                    /* Allocates and initializes a texture/page wrapper for a requested size,
                       normalizing dimensions, creating a backing resource, and storing reciprocal
                       width/height scales. Class identity is not evident. */
  piVar3 = &thisObj_;
  if (*(char *)(*(int *)((int)this + 0xc) + 0x1c) == '\0') {
    piVar3 = (int *)FUN_00462eee(local_10,piVar3);
  }
  iVar1 = piVar3[1];
  local_10[0] = *piVar3;
  local_8 = iVar1;
  pvVar4 = Mem_Alloc(0x4c);
  if (pvVar4 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    local_20 = 0;
    local_1c = 0;
    local_14 = width_ + -1;
    local_18 = thisObj_ + -1;
    piVar3 = (int *)FUN_00462d00(*(undefined4 *)((int)this + 0xc),local_10[0],iVar1,&local_20);
  }
  if (piVar3 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar3 + 4))();
    if (cVar2 != '\0') {
      pvVar4 = Mem_Alloc(0x58);
      if (pvVar4 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0045b42e(*(undefined4 *)((int)this + 0xc),thisObj_,width_);
      }
      if (iVar5 != 0) {
        *(int **)(iVar5 + 0x20) = piVar3;
        *(int *)(iVar5 + 0x24) = local_10[0];
        *(int *)(iVar5 + 0x28) = iVar1;
        *(float *)(iVar5 + 0x2c) = 1.0 / (float)local_10[0];
        *(float *)(iVar5 + 0x30) = 1.0 / (float)local_8;
        piVar3[9] = iVar5;
        return iVar5;
      }
    }
    (**(code **)(*piVar3 + 0x10))(1);
  }
  return 0;
}

