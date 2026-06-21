// addr: 0x0149ee20
// name: ActionNode_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * ActionNode_create(void) */

void * ActionNode_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0x2c bytes and constructs a ActionNode using its constructor
                       helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a426b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x2c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ActionNode_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

