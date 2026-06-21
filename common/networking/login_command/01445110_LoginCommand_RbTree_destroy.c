// addr: 0x01445110
// name: LoginCommand_RbTree_destroy
// subsystem: common/networking/login_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_RbTree_destroy(void * this) */

void __fastcall LoginCommand_RbTree_destroy(void *this)

{
  void *local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a red-black-tree-style container used inside login command classes
                       by erasing all nodes and freeing the header. The helper is shared by
                       SendPassword, RespondToChallenge, GuestLogin, and other login command
                       destructors. */
  puStack_8 = &LAB_01699518;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  local_14[0] = this;
  LoginCommand_RbTree_eraseRange
            (this,local_14,this,(void *)**(undefined4 **)((int)this + 4),this,
             *(undefined4 **)((int)this + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 4));
}

