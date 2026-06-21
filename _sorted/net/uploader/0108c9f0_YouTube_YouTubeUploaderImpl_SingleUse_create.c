// addr: 0x0108c9f0
// name: YouTube_YouTubeUploaderImpl_SingleUse_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * YouTube_YouTubeUploaderImpl_SingleUse_create(void * out) */

void * __fastcall YouTube_YouTubeUploaderImpl_SingleUse_create(void *out)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a YouTube::YouTubeUploaderImpl::SingleUse helper and
                       stores it in the output slot. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016421eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x20);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = YouTube_YouTubeUploaderImpl_SingleUse_ctor(pvVar1);
  }
  *(void **)out = pvVar1;
  ExceptionList = local_c;
  return out;
}

