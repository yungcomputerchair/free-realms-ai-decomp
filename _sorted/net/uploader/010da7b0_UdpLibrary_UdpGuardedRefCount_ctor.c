// addr: 0x010da7b0
// name: UdpLibrary_UdpGuardedRefCount_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UdpLibrary_UdpGuardedRefCount_ctor(void * this) */

void * __fastcall UdpLibrary_UdpGuardedRefCount_ctor(void *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a UdpLibrary_UdpGuardedRefCount object: installs the class
                       vtable/base state and initializes owned fields. It initializes
                       reference-count fields and allocates an internal CRITICAL_SECTION. */
  puStack_8 = &LAB_0164bef8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined1 *)((int)this + 8) = 0;
  local_4 = 0;
  *(undefined ***)this = UdpLibrary::UdpGuardedRefCount::vftable;
  lpCriticalSection = Mem_Alloc(0x18);
  *(LPCRITICAL_SECTION *)((int)this + 0xc) = lpCriticalSection;
  InitializeCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return this;
}

