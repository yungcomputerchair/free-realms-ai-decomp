// addr: 0x00d31f10
// name: TinyHttp_HttpManager_addPutRequest
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
TinyHttp_HttpManager_addPutRequest
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  void *pvVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a TinyHttp::HttpManager::PutRequest, links it into
                       the manager request list, increments count, and accumulates request size.
                       Evidence is the callee constructor assigning
                       TinyHttp::HttpManager::PutRequest::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0161320b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x450);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00d31ba0(param_1,param_2,param_3,param_4,param_5);
  }
  *(undefined4 *)(iVar2 + 0x230) = *(undefined4 *)(param_1 + 0x213c);
  if (*(int *)(param_1 + 0x213c) == 0) {
    *(int *)(param_1 + 0x2138) = iVar2;
  }
  else {
    *(int *)(*(int *)(param_1 + 0x213c) + 0x234) = iVar2;
  }
  *(int *)(param_1 + 0x2140) = *(int *)(param_1 + 0x2140) + 1;
  *(int *)(param_1 + 0x213c) = iVar2;
  *(int *)(param_1 + 0x2160) = *(int *)(param_1 + 0x2160) + *(int *)(iVar2 + 0x220);
  ExceptionList = local_c;
  return;
}

