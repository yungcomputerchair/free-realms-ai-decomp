// addr: 0x00f92a80
// name: SslLibrary_SslConnectionFilterImpl_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SslLibrary_SslConnectionFilterImpl_create(void * out) */

void * __fastcall SslLibrary_SslConnectionFilterImpl_create(void *out)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a large SslLibrary::SslConnectionFilterImpl object, constructs it,
                       and stores the pointer in the output slot. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01629e7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x2050);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    pvVar1 = SslLibrary_SslConnectionFilterImpl_ctor(pvVar1);
    *(void **)out = pvVar1;
    ExceptionList = local_c;
    return out;
  }
  *(undefined4 *)out = 0;
  ExceptionList = local_c;
  return out;
}

