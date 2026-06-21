// addr: 0x00750ef0
// name: Deep_RenderTargetManager_createRenderTarget
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall Deep_RenderTargetManager_createRenderTarget(int param_1,char *param_2,int param_3)

{
  uint uVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a Deep_RenderTarget, links it into a manager list,
                       and indexes it by a hash of the render target key. Evidence is the
                       Deep_RenderTarget_ctor callee and hash/list insertion at offsets 0x810-0x81c.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0155462b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x1c);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = Deep_RenderTarget_ctor(pvVar2,param_2,param_3);
  }
  local_4 = 0xffffffff;
  uVar1 = FUN_00705bc0(param_2,uVar1);
  *(undefined4 *)((int)pvVar2 + 0xc) = *(undefined4 *)(param_1 + 0x814);
  if (*(int *)(param_1 + 0x814) == 0) {
    *(void **)(param_1 + 0x810) = pvVar2;
  }
  else {
    *(void **)(*(int *)(param_1 + 0x814) + 0x10) = pvVar2;
  }
  *(void **)(param_1 + 0x814) = pvVar2;
  *(uint *)((int)pvVar2 + 8) = uVar1;
  *(undefined4 *)((int)pvVar2 + 4) = *(undefined4 *)(param_1 + 0x81c + (uVar1 % 0x14) * 4);
  *(void **)(param_1 + 0x81c + (uVar1 % 0x14) * 4) = pvVar2;
  *(int *)(param_1 + 0x818) = *(int *)(param_1 + 0x818) + 1;
  ExceptionList = local_c;
  return pvVar2;
}

