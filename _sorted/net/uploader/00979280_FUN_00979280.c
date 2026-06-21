// addr: 0x00979280
// name: FUN_00979280
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_00979280(void * outHolder, int arg_) */

void * __thiscall FUN_00979280(void *this,void *outHolder,int arg_)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x1c0-byte object with FUN_00979120 and stores the resulting
                       pointer into an output holder. No class evidence is present. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159820b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x1c0);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00979120(outHolder);
  }
  *(undefined4 *)this = uVar2;
  ExceptionList = local_c;
  return this;
}

