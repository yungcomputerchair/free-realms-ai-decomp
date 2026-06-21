// addr: 0x013b1970
// name: Lobby_buildAddGroupsCommandText
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Lobby_buildAddGroupsCommandText(uint containingGroupId_, void *
   propertySet, void * outText) */

void Lobby_buildAddGroupsCommandText(uint containingGroupId_,void *propertySet,void *outText)

{
  uint groupId_;
  int value;
  void *handle;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 local_bc [4];
  void *local_b8;
  undefined4 local_a8;
  uint local_a4;
  undefined1 local_a0 [24];
  undefined1 local_88 [124];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Builds a temporary Match, sets its containing group id and copies properties,
                       creates a LobbyCommand_AddGroups containing the match/group id, then converts
                       the command/property payload to text in outText. The function is
                       command-construction glue for AddGroups. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01687651;
  local_c = ExceptionList;
  groupId_ = DAT_01b839d8 ^ (uint)&stack0xffffff3c;
  ExceptionList = &local_c;
  DisplayActionManager_ensureSingleton();
  value = FUN_012d08f0();
  Match_ctor();
  local_4 = 0;
  Lobby_setContainingGroupID(local_88,containingGroupId_);
  Lobby_copyPropertiesFromSet(local_88,(void *)0x1);
  LobbyCommand_AddGroups_ctor();
  local_4._0_1_ = 1;
  PropertyRange_setStart(local_a0,value);
  LobbyCommand_AddGroups_appendGroupId(local_88,groupId_);
  DisplayActionManager_ensureSingleton();
  CommandHandle_releaseIfPresent(handle);
  puVar3 = local_88;
  puVar2 = local_bc;
  Match_getEmbeddedPropertySet(puVar2,puVar3);
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_013af190(puVar2,puVar3);
  local_4._0_1_ = 2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (outText,pbVar1,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_b8);
  }
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8 = (void *)((uint)local_b8 & 0xffffff00);
  local_4 = (uint)local_4._1_3_ << 8;
  LobbyCommand_AddGroups_dtor(local_a0);
  local_4 = 0xffffffff;
  Match_dtor(local_88);
  ExceptionList = local_c;
  return;
}

