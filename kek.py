import aiogram.utils.markdown as ms
from aiogram import Bot, Dispatcher, types
from aiogram.contrib.fsm_storage.memory import MemoryStorage
from aiogram.dispatcher import FSMContext
from aiogram.dispatcher.filters import Text
from aiogram.dispatcher.filters.state import State, StatesGroup
from aiogram.types import ParseMode
from aiogram.utils import executor
import asyncio

API_TOKEN = '1982683155:AAE0XTXKj9rFkmKOYG_3b7iXlL83AxzUPD0'

bot = Bot(token=API_TOKEN)
storage = MemoryStorage()

dp = Dispatcher(bot)

class Form(StatesGroup):
    firstname = State()
    lastname = State()
    group = State()
    startedu = State()

@dp.message_handler(commands='start')
async def
