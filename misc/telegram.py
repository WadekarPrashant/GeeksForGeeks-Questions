import logging
from telegram.ext import Updater, MessageHandler, Filters

# Enable logging
logging.basicConfig(format='%(asctime)s - %(name)s - %(levelname)s - %(message)s', level=logging.INFO)

# Define the callback function to save media
def save_media(update, context):
    message = update.message
    if message.photo:
        # Handle photo
        file_id = message.photo[-1].file_id
        context.bot.get_file(file_id).download()
    elif message.video:
        # Handle video
        file_id = message.video.file_id
        context.bot.get_file(file_id).download()
    elif message.audio:
        # Handle audio
        file_id = message.audio.file_id
        context.bot.get_file(file_id).download()

# Set up the bot
updater = Updater(token='5765061260:AAHmTcQB6Tht8B-FCdgOWYij5xeA4ItXjeU', use_context=True)
dispatcher = updater.dispatcher

# Set up the message handler to save media
media_handler = MessageHandler(Filters.media, save_media)
dispatcher.add_handler(media_handler)

# Start the bot
updater.start_polling()
updater.idle()
