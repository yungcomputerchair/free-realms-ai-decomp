// addr: 0x00a0a680
// name: FUN_00a0a680
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_00a0a680(void * outHolder) */

void * __fastcall FUN_00a0a680(void *outHolder)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes an output pointer to null, allocates a 0x118-byte object,
                       constructs it with FUN_00a0a5a0, and stores the result. Class identity is
                       unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015ac84b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)outHolder = 0;
  pvVar1 = Mem_Alloc(0x118);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = BoolFlag_ctor(pvVar1);
  }
  *(void **)outHolder = pvVar1;
  ExceptionList = local_c;
  return outHolder;
}

