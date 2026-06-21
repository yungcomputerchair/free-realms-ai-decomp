// addr: 0x00476387
// name: FUN_00476387
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int * create_surface_from_texture_page(int * factory, int * width, int
   height_, int format_) */

int * __thiscall
create_surface_from_texture_page(void *this,int *factory,int *width,int height_,int format_)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int unaff_EDI;
  
                    /* Creates a surface/renderer object when dimensions and format match, builds a
                       tiled texture page, initializes bounds and backing texture pointers, and
                       attaches a helper object. Class identity is not evident. */
  iVar3 = (**(code **)(*(int *)this + 100))();
  piVar2 = factory;
  if ((((height_ == iVar3) && (*(int *)((int)this + 0x98) != 0)) &&
      (*(char *)((int)this + 0x49) != '\0')) &&
     ((0 < (int)factory * (int)width &&
      (height_ = create_tiled_texture_page
                           ((void *)(*(int *)((int)this + 0x14) + 0x54),(int)factory,(int)width,
                            unaff_EDI), height_ != 0)))) {
    iVar3 = FUN_0045beed(0x1e4);
    if (iVar3 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_00475da4();
    }
    factory = piVar4;
    if (piVar4 == (int *)0x0) {
      FUN_00459af8();
    }
    else {
      piVar4[5] = 1;
      piVar4[6] = *(int *)((int)this + 0x10);
      piVar4[7] = (int)this;
      piVar1 = piVar4 + 0x1b;
      *piVar1 = 0;
      piVar4[0x1c] = 0;
      piVar4[0x1d] = (int)piVar2 + -1;
      piVar4[0x1e] = (int)width + -1;
      width = (int *)piVar4[0x1c];
      piVar4[0x1f] = *piVar1;
      piVar4[0x20] = (int)width;
      piVar4[0x21] = piVar4[0x1d];
      piVar4[0x22] = piVar4[0x1e];
      if (piVar4[9] != 0) {
        FUN_00459af8();
      }
      piVar4[9] = height_;
      if (*(int *)(height_ + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(height_ + 0x20) + 0x28;
      }
      piVar4[8] = iVar3;
      piVar4[0x10] = *(int *)((int)this + 0x14) + 0x54;
      iVar3 = FUN_0045a6b5(0xc4);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_0047624a(piVar4[0x10] + 0x10,piVar4[8]);
      }
      if ((int *)piVar4[0x11] != (int *)0x0) {
        (**(code **)(*(int *)piVar4[0x11] + 0x10))(0);
      }
      piVar4[0x11] = iVar3;
      if (iVar3 != 0) {
        uVar5 = FUN_004c9ed9(piVar1);
        FUN_0046c889(0,0,uVar5);
        FUN_004c9f6e();
        FUN_00474bd4(&factory);
        return piVar4;
      }
      (**(code **)(*piVar4 + 0x10))(0);
    }
  }
  return (int *)0x0;
}

