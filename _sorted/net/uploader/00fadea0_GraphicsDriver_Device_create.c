// addr: 0x00fadea0
// name: GraphicsDriver_Device_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * GraphicsDriver_Device_create(void)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a GraphicsDriver::Device, validates initialization, probes
                       DirectDraw display memory through ddraw.dll, and stores a derived memory
                       limit. Evidence is the GraphicsDriver::Device constructor callee and
                       DirectDraw enumeration helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0162c23b;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x19b8);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00fb5a40(uVar2);
  }
  local_4 = 0xffffffff;
  if ((char)piVar3[1] == '\0') {
    (**(code **)(*piVar3 + 0x154))(1);
    ExceptionList = local_10;
    return (int *)0x0;
  }
  cVar1 = FUN_00fadd70(piVar3[3],&local_10);
  if (cVar1 != '\0') {
    piVar3[0x662] = (uint)local_10 >> 0x14;
    ExceptionList = local_c;
    return piVar3;
  }
  piVar3[0x662] = 0xfff;
  ExceptionList = local_c;
  return piVar3;
}

