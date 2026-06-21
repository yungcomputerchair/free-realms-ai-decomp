// addr: 0x013d79e0
// name: PollChoice_createInitAndAdd
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
PollChoice_createInitAndAdd(void *param_1,int param_2,void *param_3,int param_4,int param_5)

{
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a PollChoice, initializes its fields, and adds it to the owning
                       collection. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168bb6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  local_10 = Mem_Alloc(0x30);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    local_10 = (void *)0x0;
  }
  else {
    local_10 = PollChoice_ctor(local_10);
  }
  local_4 = 0xffffffff;
  PollChoice_initFields(local_10,*(int *)((int)param_1 + 4),param_2,param_3,param_4,param_5);
  FUN_013d7870(&local_10);
  ExceptionList = local_c;
  return;
}

