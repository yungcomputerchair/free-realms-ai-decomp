// addr: 0x0065d12e
// name: FUN_0065d12e
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint get_active_rect_from_resource(int * this, int * outRect) */

uint __thiscall get_active_rect_from_resource(void *this,int *outRect)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
                    /* Fetches an object via virtual method +0x284, checks it through another
                       virtual method, and if valid writes a rectangle from fields +0x68..+0x74 as
                       left/top/right/bottom. Class identity is not evident. */
  uVar5 = (**(code **)(*(int *)this + 0x284))();
  uVar6 = uVar5;
  if (((outRect != (int *)0x0) && (uVar5 != 0)) &&
     (uVar6 = (**(code **)(*(int *)(uVar5 + 0x24) + 0xa8))(), (char)uVar6 != '\0')) {
    iVar1 = *(int *)(uVar5 + 0x70);
    iVar2 = *(int *)(uVar5 + 0x74);
    iVar3 = *(int *)(uVar5 + 0x6c);
    iVar4 = *(int *)(uVar5 + 0x68);
    outRect[1] = iVar3;
    iVar2 = iVar3 + -1 + iVar2;
    outRect[3] = iVar2;
    *outRect = iVar4;
    outRect[2] = iVar4 + -1 + iVar1;
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  return uVar6 & 0xffffff00;
}

