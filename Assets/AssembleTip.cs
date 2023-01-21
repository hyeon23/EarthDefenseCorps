using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//public class AssembleTip : MonoBehaviour
//{
//    [SerializeField]
//    private Rigidbody2D curBlockRigid;

//    private GameObject assembledBlock = null;

//    private void OnTriggerEnter2D(Collider2D collision)
//    {
//        if(collision.tag == "Player")
//        {

//        }
//        else if(collision.tag == "Block")
//        {
//            collision.GetComponent<Block>().ChangeState(BlockState.Assembled);
//            assembledBlock = collision.gameObject;
//        }
//        else if(collision.tag == "Weapon")
//        {
//        }
//        else if(collision.tag == "Sheld")
//        {
//        }
//    }
   
//    private void OnTriggerStay2D(Collider2D collision)
//    {
        
//    }

//    private void OnTriggerExit2D(Collider2D collision)
//    {
//        if (collision.tag == "Block")
//        {
//            collision.GetComponent<Block>().ChangeState(BlockState.Falling);
//            assembledBlock = null;
//        }
//    }

//    public GameObject GetAssembledParentBlock()
//    {
//        return assembledBlock;
//    }
//}
