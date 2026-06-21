// addr: 0x014cc510
// name: LobbyRoleMap_addRolePropertySet
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyRoleMap_addRolePropertySet(void * roleMap, int roleId, void *
   roleName, void * props, void * key, void * out, int flags) */

void __thiscall
LobbyRoleMap_addRolePropertySet
          (void *this,void *roleMap,int roleId,void *roleName,void *props,void *key,void *out,
          int flags)

{
  void *element;
  void **ppvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates a PropertySet copy for a lobby role, appends it to the role set, and
                       updates role lookup structures. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ab67b;
  local_c = ExceptionList;
  element = (void *)(DAT_01b839d8 ^ (uint)&stack0xfffffff0);
  ExceptionList = &local_c;
  FUN_0042c155(&roleMap);
  StdVector28_pushBack((void *)((int)this + 0x28),(void *)roleId,element);
  StdVector_PropertySetPtr_pushBackSlow((void *)((int)this + 0x38),&roleName);
  StdVector28_pushBack((void *)((int)this + 0x48),(void *)flags,element);
  roleId = (int)Mem_Alloc(0x10);
  local_4 = 0;
  if ((void *)roleId == (void *)0x0) {
    roleId = 0;
  }
  else {
    roleId = (int)PropertySet_ctor((void *)roleId);
  }
  local_4 = 0xffffffff;
  PropertySet_copyPropertiesFrom((int)props);
  StdVector_PropertySetPtr_pushBack((void *)((int)this + 0x58),&roleId);
  FUN_014c7a40(&out);
  ppvVar1 = &roleMap;
  LobbyRoleMap_getOrCreateRoleSet(&key);
  FUN_0042c155(ppvVar1);
  ExceptionList = local_c;
  return;
}

