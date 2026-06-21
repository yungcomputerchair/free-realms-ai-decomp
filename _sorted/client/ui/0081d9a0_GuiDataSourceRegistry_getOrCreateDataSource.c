// addr: 0x0081d9a0
// name: GuiDataSourceRegistry_getOrCreateDataSource
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuiDataSourceRegistry_getOrCreateDataSource(char * name) */

void * GuiDataSourceRegistry_getOrCreateDataSource(char *name)

{
  char cVar1;
  void *dataSource;
  void *pvVar2;
  void *registry;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Looks up a data source by name and, if missing, allocates/constructs a new
                       0x54-byte data-source record, registers it, and returns it. Exact concrete
                       data-source class is not identified. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0156a3cb;
  local_c = ExceptionList;
  dataSource = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  ExceptionList = &local_c;
  local_10 = (void *)0x0;
  cVar1 = FUN_008195a0(name,&local_10);
  if ((cVar1 == '\0') || (registry = local_10, local_10 == (void *)0x0)) {
    pvVar2 = Mem_Alloc(0x54);
    local_4 = 0;
    registry = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      registry = (void *)GuiDsValue_ctor(name);
    }
    local_4 = 0xffffffff;
    GuiDataSourceRegistry_registerDataSource(DAT_01be1090,registry,dataSource);
  }
  ExceptionList = local_c;
  return registry;
}

