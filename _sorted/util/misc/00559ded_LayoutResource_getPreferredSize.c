// addr: 0x00559ded
// name: LayoutResource_getPreferredSize
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int * LayoutResource_getPreferredSize(int * outSize, void * layout, void *
   child, int flags_) */

int * LayoutResource_getPreferredSize(int *outSize,void *layout,void *child,int flags_)

{
  int iVar1;
  void *pvVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int local_1c [3];
  int local_10;
  int local_c;
  int local_8;
  
                    /* Computes a two-int preferred size for a layout resource, querying
                       fallback/min/max resources and clamping against optional child bounds.
                       Evidence is vtable+0x18 resource lookup using data symbols and max/min
                       updates. */
  pvVar2 = layout;
  if (child == (void *)0x0) {
    iVar5 = FUN_00559d2e(layout);
    child = (void *)0x0;
    piVar4 = (int *)((int)layout + 0x24);
    layout = (void *)(uint)*(ushort *)(&PTR_DAT_01afe1c4)[iVar5];
    (**(code **)(*piVar4 + 0x18))(layout,piVar4,&child);
    piVar6 = local_1c;
    if (child == (void *)0x0) {
      local_1c[0] = 0;
      local_1c[1] = 0;
    }
    else {
      piVar6 = (int *)FUN_005584a8(piVar6,-(uint)(pvVar2 != (void *)0x0) & (uint)piVar4,flags_,1);
    }
    iVar5 = piVar6[1];
    iVar1 = *piVar6;
    *outSize = iVar1;
    outSize[1] = iVar5;
    if (((child == (void *)0x0) || (iVar1 < 1)) || (iVar5 < 1)) {
      (**(code **)(*piVar4 + 0x18))(DAT_01bd3a90,piVar4,outSize);
    }
    cVar3 = (**(code **)(*piVar4 + 0x18))(DAT_01bd1920,piVar4,&local_c);
    if (cVar3 != '\0') {
      if (local_8 < outSize[1]) {
        local_8 = outSize[1];
      }
      iVar5 = *outSize;
      if (*outSize <= local_c) {
        iVar5 = local_c;
      }
      *outSize = iVar5;
      outSize[1] = local_8;
    }
    cVar3 = (**(code **)(*piVar4 + 0x18))(DAT_01bd4b88,piVar4,local_1c + 2);
    if (cVar3 == '\0') {
      return outSize;
    }
    if (outSize[1] < local_10) {
      local_10 = outSize[1];
    }
    iVar5 = *outSize;
    if (local_1c[2] <= *outSize) {
      iVar5 = local_1c[2];
    }
  }
  else {
    piVar4 = (int *)(**(code **)(*(int *)child + 0x154))(local_1c);
    local_10 = piVar4[1];
    iVar5 = *piVar4;
  }
  outSize[1] = local_10;
  *outSize = iVar5;
  return outSize;
}

